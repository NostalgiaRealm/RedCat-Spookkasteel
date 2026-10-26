/*
 * FUN_00477710 at 00477710
 * int __register FUN_00477710(int param_1)
 * Address ranges: 00477710-0047776b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00477710(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  VARIANTARG *pVVar4;
  
  iVar1 = FUN_00477778(param_1);
  while( true ) {
    uVar3 = FUN_00478644(param_1,"OR");
    if ((char)uVar3 == '\0') break;
    FUN_004770d8(param_1);
    pVVar4 = (VARIANTARG *)PTR_DAT_00572140;
    iVar2 = FUN_00477778(param_1);
    iVar1 = FUN_00475d68(*(int *)(param_1 + 4),'\x02',0xb,iVar2,iVar1,pVVar4);
    FUN_00478164(param_1,iVar1,*(int *)(iVar1 + 0x18),*(int *)(iVar1 + 0x1c));
    *(undefined1 *)(iVar1 + 0x20) = 5;
  }
  return iVar1;
}

