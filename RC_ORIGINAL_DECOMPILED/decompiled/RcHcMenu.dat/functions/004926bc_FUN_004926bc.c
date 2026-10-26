/*
 * FUN_004926bc at 004926bc
 * undefined __register FUN_004926bc(int param_1, int param_2)
 * Address ranges: 004926bc-0049270c;0049274d-00492762
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004926bc(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  undefined4 uStack_128;
  undefined1 *puStack_124;
  undefined1 *puStack_120;
  int local_10;
  int local_c;
  int local_8;
  
  puStack_120 = &stack0xfffffffc;
  puStack_12c = &stack0xfffffffc;
  local_10 = 0;
  puStack_124 = &LAB_00492763;
  uStack_128 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_128;
  puStack_130 = &LAB_0049270d;
  uStack_134 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_134;
  local_c = param_2;
  local_8 = param_1;
  (**(code **)(**(int **)(param_1 + 0x38) + 0x38))
            (*(int **)(param_1 + 0x38),*(undefined4 *)(param_2 + 0xc),param_2);
  *in_FS_OFFSET = uStack_134;
  *in_FS_OFFSET = uStack_128;
  puStack_120 = &LAB_0049276a;
  puStack_124 = (undefined1 *)0x492762;
  FUN_00403db0(&local_10);
  return;
}

