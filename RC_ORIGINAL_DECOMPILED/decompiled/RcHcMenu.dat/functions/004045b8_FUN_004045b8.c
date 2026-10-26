/*
 * FUN_004045b8 at 004045b8
 * undefined __register FUN_004045b8(BSTR param_1, LPCSTR param_2)
 * Address ranges: 004045b8-004045c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004045b8(BSTR param_1,LPCSTR param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != (LPCSTR)0x0) {
    iVar1 = *(int *)(param_2 + -4);
  }
  FUN_004044d4(param_1,param_2,iVar1);
  return;
}

