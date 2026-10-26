/*
 * FUN_005b3eb0 at 005b3eb0
 * undefined FUN_005b3eb0(void)
 * Address ranges: 005b3eb0-005b3ef7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005b3eb0(int *param_1,int param_2)

{
  if (0 < param_1[4]) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0x18d,
                 &DAT_006b3f70,0);
    return 0;
  }
  if (*param_1 != 0) {
    thunk_FUN_005b7020();
  }
  *param_1 = param_2;
  return 1;
}

