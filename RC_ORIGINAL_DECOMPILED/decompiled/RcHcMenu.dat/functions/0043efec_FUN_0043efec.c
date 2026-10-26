/*
 * FUN_0043efec at 0043efec
 * undefined __register FUN_0043efec(int * param_1, int * param_2)
 * Address ranges: 0043efec-0043f008
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043efec(int *param_1,int *param_2)

{
  HIMAGELIST p_Var1;
  
  if (param_2 != (int *)0x0) {
    p_Var1 = (HIMAGELIST)FUN_0043e588(param_2);
    FUN_0043ee54(param_1,p_Var1);
  }
  return;
}

