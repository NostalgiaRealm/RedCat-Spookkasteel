/*
 * FUN_0040591b at 0040591b
 * undefined __register FUN_0040591b(void)
 * Address ranges: 0040591b-0040592c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0040591b(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int unaff_EBX;
  VARIANTARG *unaff_ESI;
  VARIANTARG *unaff_EDI;
  
  if ((byte)unaff_EBX == 0) {
    FUN_004055e4(unaff_EDI,unaff_ESI);
    return;
  }
  if ((byte)unaff_EBX < 4) {
    FUN_004051ec(unaff_ESI);
    FUN_004051ec(unaff_EDI);
    (**(code **)(&DAT_004058ff + unaff_EBX * 4))();
    FUN_00405414(unaff_EDI);
    return;
  }
  uVar1 = FUN_0040514c(unaff_ESI);
  uVar2 = FUN_0040514c(unaff_EDI);
  uVar3 = (**(code **)(&DAT_004057e6 + unaff_EBX * 4))(uVar2,uVar1);
  FUN_004053dc(unaff_EDI,uVar3);
  return;
}

