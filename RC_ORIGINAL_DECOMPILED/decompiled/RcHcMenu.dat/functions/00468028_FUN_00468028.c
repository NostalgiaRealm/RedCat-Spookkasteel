/*
 * FUN_00468028 at 00468028
 * undefined __register FUN_00468028(int param_1, VARIANTARG * param_2, VARIANT * param_3)
 * Address ranges: 00468028-0046808e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00468028(int param_1,VARIANTARG *param_2,VARIANT *param_3)

{
  bool bVar1;
  VARIANTARG *pVVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  
  FUN_00404e28(param_3,(VARIANTARG *)PTR_DAT_00572068);
  bVar1 = FUN_00405c2c((short *)param_2);
  if ((!bVar1) && (iVar3 = *(int *)(*(int *)(param_1 + 4) + 8), -1 < iVar3 + -1)) {
    iVar4 = 0;
    uVar5 = true;
    do {
      pVVar2 = (VARIANTARG *)FUN_00412384(*(undefined4 **)(param_1 + 4),iVar4);
      FUN_00405abc(pVVar2,param_2);
      if ((bool)uVar5) {
        iVar3 = FUN_00412384(*(undefined4 **)(param_1 + 4),iVar4);
        FUN_00404e28(param_3,(VARIANTARG *)(iVar3 + 0x10));
        return;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + -1;
      uVar5 = iVar3 == 0;
    } while (!(bool)uVar5);
  }
  return;
}

