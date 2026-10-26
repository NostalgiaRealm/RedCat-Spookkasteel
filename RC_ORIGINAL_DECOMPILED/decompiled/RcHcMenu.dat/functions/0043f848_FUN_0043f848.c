/*
 * FUN_0043f848 at 0043f848
 * undefined __register FUN_0043f848(int * param_1, int param_2)
 * Address ranges: 0043f848-0043f8b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043f848(int *param_1,int param_2)

{
  IStream *pIVar1;
  IStream *pstm;
  HIMAGELIST himl;
  BOOL BVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x43f85f;
  pIVar1 = (IStream *)FUN_0041998c((int *)&PTR_FUN_00411144,'\x01',param_2,0);
  puStack_14 = &LAB_0043f8b9;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  pstm = pIVar1;
  if (pIVar1 != (IStream *)0x0) {
    pstm = pIVar1 + 5;
  }
  himl = (HIMAGELIST)FUN_0043e588(param_1);
  BVar2 = ImageList_Write(himl,pstm);
  if (BVar2 == 0) {
    piVar3 = FUN_0040cfa8((int *)&DAT_00410444,'\x01',(undefined4 *)PTR_PTR_0057226c);
    FUN_0040382c(piVar3);
  }
  *in_FS_OFFSET = uStack_18;
  puStack_14 = (undefined1 *)0x43f8b8;
  FUN_00403094((int *)pIVar1);
  return;
}

