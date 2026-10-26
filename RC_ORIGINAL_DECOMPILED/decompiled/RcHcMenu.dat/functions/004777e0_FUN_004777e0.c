/*
 * FUN_004777e0 at 004777e0
 * int __register FUN_004777e0(int param_1)
 * Address ranges: 004777e0-0047783c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_004777e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  VARIANTARG *pVVar3;
  
  uVar1 = FUN_00478644(param_1,"NOT");
  if ((char)uVar1 == '\0') {
    iVar2 = FUN_0047784c(param_1);
  }
  else {
    FUN_004770d8(param_1);
    pVVar3 = (VARIANTARG *)PTR_DAT_00572140;
    uVar1 = FUN_0047784c(param_1);
    iVar2 = FUN_00475d68(*(int *)(param_1 + 4),'\x02',9,0,uVar1,pVVar3);
    *(undefined1 *)(iVar2 + 0x20) = 5;
  }
  FUN_00478164(param_1,iVar2,*(int *)(iVar2 + 0x18),*(int *)(iVar2 + 0x1c));
  return iVar2;
}

