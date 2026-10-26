/*
 * FUN_0049cd38 at 0049cd38
 * undefined4 __register FUN_0049cd38(int param_1)
 * Address ranges: 0049cd38-0049cd81
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0049cd38(int param_1)

{
  int *piVar1;
  undefined4 extraout_ECX;
  
  if (*(int *)(param_1 + 4) == 0) {
    piVar1 = FUN_004554c0((int *)&PTR_FUN_004538ac,'\x01',(int *)0x0);
    *(int **)(param_1 + 4) = piVar1;
    FUN_00455668(*(int *)(param_1 + 4),param_1,extraout_ECX,FUN_0049ce40,param_1);
  }
  return *(undefined4 *)(param_1 + 4);
}

