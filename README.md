# CCFF7RUproj

uProject for UE 4.27.2

Main branch is for launcher version of the engine.  The CustomEngineDev branch requires the custom engine found at the CCFF7R branch here: https://github.com/narknon/UnrealEngine-CEEnd/tree/CCFF7R.  The custom engine has improvements for material modding and other features.

See the wiki for other tutorials: https://github.com/narknon/CCFF7RUproj/wiki

Project is prebuilt.  You need Visual Studio 2017, 2019 or 2022 with Game Dev components installed.  VS 2022 can be downloaded here: https://visualstudio.microsoft.com/vs/community/

Ensure these options are selected when installing.  ![image](https://user-images.githubusercontent.com/73571427/209239744-7707f454-788c-408f-8eab-7460281a7644.png)


After downloading the project, right click on the CCFF7R.uproject, select switch Unreal Engine Version, and ensure it says 4.27, then hit OK.

![image](https://user-images.githubusercontent.com/73571427/209239849-32f5e88d-e427-47e2-aea8-626d65f9aaa5.png)

![image](https://user-images.githubusercontent.com/73571427/209239863-e54bc5de-ef39-473f-9441-d9dde8c4f48a.png)

Once that completes, clicking on the .uproject should launch the project.


Note that most mods currently require this .exe patch for CCFF7R: https://www.nexusmods.com/crisiscoreff7reunion/mods/2 

To pak files as UCAS/UTOC:

Download and open the uproject, pointing it at your 4.27.2 install.

In the project settings, make sure the following 3 options are selected.
![image](https://user-images.githubusercontent.com/73571427/209052034-97e8143a-7e8d-4e80-8734-d275b2ced444.png)


Under editor settings, make sure the following setting is selected.  

![image](https://user-images.githubusercontent.com/73571427/209052077-27bcdd65-60f4-445d-8513-c599ffb8c370.png)


Import your mesh as normal, dummying the materials where necessary in the game files and original structure.

![image](https://user-images.githubusercontent.com/73571427/209052127-8c910997-d6d9-4652-8888-7be270db0a70.png)


For any files that you want to include in your pak, right click, asset actions, assign to chunk.

![image](https://user-images.githubusercontent.com/73571427/209052167-379b1100-3b49-4ef4-9bfe-874c03e8bc79.png)

Enter any chunk number greater than 8.

![image](https://user-images.githubusercontent.com/73571427/209052261-39b7ca43-d49b-4bea-9bd3-7e6a86526f9f.png)

Save All.

Ensure your build configuration is dev or shipping.

![image](https://user-images.githubusercontent.com/73571427/209052298-cb50869f-50c3-4915-a4ec-5df8420a980e.png)


Select File -> Package Project -> Windows 64 Bit and select a folder.

![image](https://user-images.githubusercontent.com/73571427/209052332-86110948-0ca1-4425-9b9d-d87d607eea6e.png)


![image](https://user-images.githubusercontent.com/73571427/209052344-cfd7f753-b271-482e-8b50-d59fac7c301c.png)


After packaging completes, navigate to the folder you selected, and the path \WindowsNoEditor\CCFF7R\Content\Paks.

Find the pak, ucas and utoc that match the chunk number you provided earlier.

Rename those 3 files to the same name, all ending in _P, for example zTestMod_P

That's it, test it out in game.



