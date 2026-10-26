/*
 * FUN_00492940 at 00492940
 * undefined __register FUN_00492940(int param_1, undefined4 param_2)
 * Address ranges: 00492940-0049299e;00492a1d-00492a3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00492940(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_148;
  undefined1 *puStack_144;
  undefined1 *puStack_140;
  undefined4 uStack_13c;
  undefined1 *puStack_138;
  undefined1 *puStack_134;
  int local_24 [3];
  int local_18 [3];
  undefined4 local_c;
  int local_8;
  
  puStack_134 = &stack0xfffffffc;
  puStack_140 = &stack0xfffffffc;
  local_18[1] = 0;
  local_24[0] = 0;
  local_18[0] = 0;
  puStack_138 = &LAB_00492a40;
  uStack_13c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_13c;
  puStack_144 = &LAB_0049299f;
  uStack_148 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_148;
  local_c = param_2;
  local_8 = param_1;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x38) + 0x18))
                            (*(int **)(param_1 + 0x38),param_2);
  local_18[2] = FUN_00403224(piVar1,(int)&DAT_0048e950);
  *in_FS_OFFSET = uStack_148;
  *in_FS_OFFSET = uStack_13c;
  puStack_134 = &LAB_00492a47;
  puStack_138 = (undefined1 *)0x492a32;
  FUN_00403db0(local_24);
  puStack_138 = (undefined1 *)0x492a3f;
  FUN_00403dd4(local_18,2);
  return;
}

