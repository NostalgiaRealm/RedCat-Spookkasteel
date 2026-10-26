/*
 * FUN_0040e284 at 0040e284
 * uint __register FUN_0040e284(void)
 * Address ranges: 0040e284-0040e2e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0040e284(void)

{
  bool bVar1;
  uint *hResData;
  uint uVar2;
  uint uVar3;
  
  hResData = FUN_0040e204();
  uVar2 = FUN_0040e188(hResData);
  uVar3 = FUN_0040e198(hResData);
  if ((((uVar2 == DAT_0056f350) && (uVar3 == DAT_0056f35c)) ||
      ((uVar2 == DAT_0056f354 && (uVar3 == DAT_0056f360)))) ||
     ((uVar2 == DAT_0056f358 && (uVar3 == DAT_0056f364)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  FreeResource(hResData);
  if (!bVar1) {
    FUN_0040e1b0();
  }
  return uVar2;
}

