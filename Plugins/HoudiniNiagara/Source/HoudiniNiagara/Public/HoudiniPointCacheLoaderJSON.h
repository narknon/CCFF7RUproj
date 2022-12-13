#pragma once

#include "CoreMinimal.h"
#include "Dom/JsonObject.h"

#include "HoudiniPointCacheLoaderJSONBase.h"

class UHoudiniPointCache;

/**
 * Text JSON Houdini Point Cache loader using FJsonReader and FJsonSerializer.
 * An example:
 * {
 *      "header" : {
 *          "version" : 1.0,
 *          "num_samples" : 100,  (?? needed ??)
 *          “num_frames” : 10,
 *          “num_points” : 10,
 *          “num_attrib” : 5
 *          “attrib_name” : [ "id", "P", “N”, “Cd”, “age” ]
 *          “attrib_size” : [ 1, 3, 3, 4, 1 ]
 *          “data_type” : “linear”,
 *      },
 *      “cache_data” : {
 *          “frames” : [
 *              {
 *                  “number” : 0
 *                  “time” : 0.0
 *                  “frame_data” : [
 *                      [0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,1.0, 1.0,1.0, 1.0, 0.0 ]
 *                      [1, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,1.0, 1.0,1.0, 1.0, 0.0 ]
 *                      [2, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,1.0, 1.0,1.0, 1.0, 0.0 ]
 *                      [3, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,1.0, 1.0,1.0, 1.0, 0.0 ]
 *                      [4, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,1.0, 1.0,1.0, 1.0, 0.0 ]
 *                      [5, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,1.0, 1.0,1.0, 1.0, 0.0 ]
 *                      [6, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,1.0, 1.0,1.0, 1.0, 0.0 ]
 *                      [7, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,1.0, 1.0,1.0, 1.0, 0.0 ]
 *                      [8, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,1.0, 1.0,1.0, 1.0, 0.0 ]
 *                      [9, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,1.0, 1.0,1.0, 1.0, 0.0 ]		
 *                  ]
 *              },
 *              {
 *                  “number” : 1
 *                  “time” : 0.033333
 *                  “frame_data” : {
 *                      [0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0,1.0, 1.0,1.0, 1.0, 0.0 ]
 *                      [1, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,1.0, 1.0,1.0, 1.0, 0.0 ]
 *                      [2, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,1.0, 1.0,1.0, 1.0, 0.0 ]
 *                      [3, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,1.0, 1.0,1.0, 1.0, 0.0 ]
 *                      [4, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,1.0, 1.0,1.0, 1.0, 0.0 ]
 *                      [5, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,1.0, 1.0,1.0, 1.0, 0.0 ]
 *                      [6, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,1.0, 1.0,1.0, 1.0, 0.0 ]
 *                      [7, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,1.0, 1.0,1.0, 1.0, 0.0 ]
 *                      [8, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,1.0, 1.0,1.0, 1.0, 0.0 ]
 *                      [9, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0,1.0, 1.0,1.0, 1.0, 0.0 ]		
 *                  }
 *              }
 *          ]
 *      }
 * }
 */
class FHoudiniPointCacheLoaderJSON : public FHoudiniPointCacheLoaderJSONBase
{
    public:
        FHoudiniPointCacheLoaderJSON(const FString& InFilePath);

        virtual bool LoadToAsset(UHoudiniPointCache *InAsset) override;

        /** Read and process the 'header' object from the JSON InPointCacheObject and populate OutHeader. */
        bool ReadHeader(const FJsonObject &InPointCacheObject, FHoudiniPointCacheJSONHeader &OutHeader) const;
};
