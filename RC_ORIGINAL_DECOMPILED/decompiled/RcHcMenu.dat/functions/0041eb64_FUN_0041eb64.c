/*
 * FUN_0041eb64 at 0041eb64
 * undefined __register FUN_0041eb64(int * param_1, int param_2)
 * Address ranges: 0041eb64-0041ebad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041eb64(int *param_1,int param_2)

{
  VARIANTARG *pVVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_1[2] + -1;
  if (-1 < iVar3) {
    do {
      pVVar1 = (VARIANTARG *)FUN_00412384(param_1,iVar3);
      uVar2 = thunk_FUN_004032a4(*(int *)&pVVar1->n1,param_2);
      if ((char)uVar2 != '\0') {
        FUN_00404c88(pVVar1,"\x0e\vTFileFormat\x10");
        FUN_00412224(param_1,iVar3);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return;
}

