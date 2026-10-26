/*
 * FUN_0056b850 at 0056b850
 * undefined __register FUN_0056b850(int param_1, int * param_2)
 * Address ranges: 0056b850-0056ba02
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056b850(int param_1,int *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","DIFFICULTY",1);
  *(undefined1 *)(param_1 + 8) = uVar1;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","RESOLUTION",1);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","MUSICVOLUME",100);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","FXVOLUME",100);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","VOICESVOLUME",100);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,"DEFAULTSETTINGS","MUSICON",1);
  *(undefined1 *)(param_1 + 0x1d) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,"DEFAULTSETTINGS",&DAT_0056ba9c,1);
  *(undefined1 *)(param_1 + 0x1c) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,"DEFAULTSETTINGS","VOICESON",1);
  *(undefined1 *)(param_1 + 0x1e) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,"DEFAULTSETTINGS","SHOWSTARTINFO",1);
  *(undefined1 *)(param_1 + 0x1f) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,"DEFAULTSETTINGS","AlphaBlending",1);
  *(undefined1 *)(param_1 + 0x39) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,"DEFAULTSETTINGS","BiliniarFiltering",1);
  *(undefined1 *)(param_1 + 0x38) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x10))(param_2,"DEFAULTSETTINGS","WaitVbl",0);
  *(undefined1 *)(param_1 + 0x40) = uVar1;
  iVar3 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","Gamma",0);
  *(double *)(param_1 + 0x30) = (double)iVar3;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","RenderFocus",0);
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  uVar2 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","DriverIndex",0);
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  FUN_0056b534(*(int *)(param_1 + 0xc),param_2);
  return;
}

