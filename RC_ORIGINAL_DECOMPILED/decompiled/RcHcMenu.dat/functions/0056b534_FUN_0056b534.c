/*
 * FUN_0056b534 at 0056b534
 * undefined __register FUN_0056b534(int param_1, int * param_2)
 * Address ranges: 0056b534-0056b649
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0056b534(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS",&DAT_0056b654,1);
  *(undefined4 *)(param_1 + 8) = uVar1;
  uVar1 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS",&DAT_0056b678,1);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  uVar1 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS",&DAT_0056b688,1);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","Right",1);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","Extra1",1);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","Extra2",1);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","Extra3",1);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","ControlType",1);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  uVar1 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","JoySensitivity",1);
  *(undefined4 *)(param_1 + 0x28) = uVar1;
  uVar1 = (**(code **)(*param_2 + 8))(param_2,"DEFAULTSETTINGS","WheelSensitivity",1);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  return;
}

