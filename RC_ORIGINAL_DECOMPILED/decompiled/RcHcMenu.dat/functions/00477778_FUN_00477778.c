/*
 * FUN_00477778 at 00477778
 * int __register FUN_00477778(int param_1)
 * Address ranges: 00477778-004777d3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00477778(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  VARIANTARG *pVVar4;
  
  iVar1 = FUN_004777e0(param_1);
  while( true ) {
    uVar3 = FUN_00478644(param_1,"AND");
    if ((char)uVar3 == '\0') break;
    FUN_004770d8(param_1);
    pVVar4 = (VARIANTARG *)PTR_DAT_00572140;
    iVar2 = FUN_004777e0(param_1);
    iVar1 = FUN_00475d68(*(int *)(param_1 + 4),'\x02',10,iVar2,iVar1,pVVar4);
    FUN_00478164(param_1,iVar1,*(int *)(iVar1 + 0x18),*(int *)(iVar1 + 0x1c));
    *(undefined1 *)(iVar1 + 0x20) = 5;
  }
  return iVar1;
}

