/*
 * FUN_004708c0 at 004708c0
 * undefined __register FUN_004708c0(int param_1, int * param_2)
 * Address ranges: 004708c0-0047091a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004708c0(int param_1,int *param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_0046f970(param_1);
  if ((char)uVar3 != '\0') {
    FUN_00403db0(param_2);
    return;
  }
  cVar1 = FUN_0046f9c0(param_1);
  if (cVar1 == '\x05') {
    bVar2 = FUN_004051b8((VARIANTARG *)(param_1 + 0x18));
    if (bVar2) {
      FUN_00406a48((undefined4 *)PTR_PTR_005723e4,param_2);
    }
    else {
      FUN_00406a48((undefined4 *)PTR_PTR_00572134,param_2);
    }
  }
  else {
    FUN_004052a4(param_2,(VARIANTARG *)(param_1 + 0x18));
  }
  return;
}

