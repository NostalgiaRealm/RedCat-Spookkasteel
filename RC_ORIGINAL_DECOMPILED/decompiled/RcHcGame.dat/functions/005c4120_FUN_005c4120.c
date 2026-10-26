/*
 * FUN_005c4120 at 005c4120
 * undefined FUN_005c4120(void)
 * Address ranges: 005c4120-005c41be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005c4120(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x70) != 0) {
    param_1 = *(int *)(param_1 + 0x70);
  }
  if ((*(int *)(param_1 + 0x6c) < 1) && (*(int *)(param_1 + 0x74) == 0)) {
    if (param_2 == *(int *)(param_1 + 0x68)) {
      return 1;
    }
    if (*(int *)(param_1 + 0xac) != 0) {
      FUN_005c23a0(param_1);
    }
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_005c02b0();
    }
    *(int *)(param_1 + 0x68) = param_2;
    if (param_2 != 0) {
      FUN_005c01c0();
    }
    if (*(int *)(param_1 + 0xac) != 0) {
      FUN_005c1f40(param_1);
    }
    return 1;
  }
  FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0xe03,
               &DAT_006b3f70,0);
  return 0;
}

