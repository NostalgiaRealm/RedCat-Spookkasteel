/*
 * FUN_00536428 at 00536428
 * undefined __register FUN_00536428(int param_1, int param_2, int param_3)
 * Address ranges: 00536428-00536469
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00536428(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = FUN_0045b418((int *)&DAT_0053617c,'\x01',param_3);
  piVar1[1] = param_2;
  piVar1[2] = param_3;
  (**(code **)(**(int **)(param_1 + 4) + 0xc))(*(int **)(param_1 + 4),piVar1);
  return;
}

