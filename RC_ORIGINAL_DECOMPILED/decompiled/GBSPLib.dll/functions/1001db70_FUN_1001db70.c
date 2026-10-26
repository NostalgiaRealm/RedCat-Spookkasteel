/*
 * FUN_1001db70 at 1001db70
 * undefined FUN_1001db70(void)
 * Address ranges: 1001db70-1001dd12
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1001db70(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_1001cdb0();
  }
  iVar1 = FUN_10014a20(4);
  if (iVar1 == 0) {
    FUN_10015fb0(0x40,&DAT_10265ce0,s___Actor_path_c_1003c778,0x591,&DAT_10265ce0,0);
    return 0;
  }
  iVar1 = FUN_10014a60(param_2,s__X___2X_1003a6c8,0,0xf2);
  if (iVar1 == 0) {
    FUN_10015fb0(0x40,&DAT_10265ce0,s___Actor_path_c_1003c778,0x599,&DAT_10265ce0,0);
    return 0;
  }
  iVar1 = 0;
  if ((*param_1 != 0) && (iVar2 = FUN_10024f00(), 0 < iVar2)) {
    iVar1 = 1;
  }
  iVar2 = FUN_10014a60(param_2,s__s__d__d_1003c7e4,s_Rotation_1003c7c8,iVar1,param_1[1]);
  if (iVar2 == 0) {
    FUN_10015fb0(0x40,&DAT_10265ce0,s___Actor_path_c_1003c778,0x5ae,&DAT_10265ce0,0);
    return 0;
  }
  uVar4 = (uint)((*(byte *)(param_1 + 0x10) & 2) != 0);
  if (iVar1 != 0) {
    uVar5 = uVar4;
    uVar3 = FUN_1001dd40(uVar4);
    iVar1 = FUN_10025670(uVar3,uVar5);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = 0;
  if ((param_1[8] != 0) && (iVar2 = FUN_10024f00(), 0 < iVar2)) {
    iVar1 = 1;
  }
  iVar2 = FUN_10014a60(param_2,s__s__d__d_1003c7e4,s_Translation_1003c7bc,iVar1,param_1[9]);
  if (iVar2 == 0) {
    FUN_10015fb0(0x40,&DAT_10265ce0,s___Actor_path_c_1003c778,0x5cb,&DAT_10265ce0,0);
    return 0;
  }
  if (iVar1 != 0) {
    uVar3 = FUN_1001dd20(uVar4);
    iVar1 = FUN_10026a10(uVar3,uVar4);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

