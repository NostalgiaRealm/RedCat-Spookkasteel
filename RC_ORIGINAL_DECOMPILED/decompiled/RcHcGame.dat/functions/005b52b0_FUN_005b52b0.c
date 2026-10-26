/*
 * FUN_005b52b0 at 005b52b0
 * undefined FUN_005b52b0(void)
 * Address ranges: 005b52b0-005b5381
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005b52b0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005cd7b0();
    *(int *)(param_1 + 4) = 0;
  }
  iVar1 = FUN_005cd4d0(param_2);
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    FUN_005cf220(0x6f,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0x6ef,
                 &DAT_006b3f70,0);
    return 0;
  }
  iVar1 = FUN_005b4570(&local_18);
  if (iVar1 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006a9428 + 8,0x6f6,
                 &DAT_006b3f70,0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x18) = local_18;
  *(undefined4 *)(param_1 + 0x1c) = local_14;
  *(undefined4 *)(param_1 + 0x24) = local_c;
  *(undefined4 *)(param_1 + 0x20) = local_10;
  *(undefined4 *)(param_1 + 0x28) = local_8;
  *(undefined4 *)(param_1 + 0x2c) = local_4;
  return 1;
}

