/*
 * FUN_0043f73c at 0043f73c
 * undefined __register FUN_0043f73c(int * param_1, int param_2)
 * Address ranges: 0043f73c-0043f7b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043f73c(int *param_1,int param_2)

{
  IStream *pIVar1;
  IStream *pstm;
  HIMAGELIST p_Var2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x43f753;
  pIVar1 = (IStream *)FUN_0041998c((int *)&PTR_FUN_00411144,'\x01',param_2,0);
  puStack_14 = &LAB_0043f7b5;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pstm = pIVar1;
  if (pIVar1 != (IStream *)0x0) {
    pstm = pIVar1 + 5;
  }
  p_Var2 = ImageList_Read(pstm);
  FUN_0043e54c(param_1,p_Var2);
  iVar3 = FUN_0043e588(param_1);
  if (iVar3 == 0) {
    piVar4 = FUN_0040cfa8((int *)&DAT_004103ec,'\x01',(undefined4 *)PTR_PTR_00572468);
    FUN_0040382c(piVar4);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_14 = (undefined1 *)0x43f7b4;
  FUN_00403094((int *)pIVar1);
  return;
}

