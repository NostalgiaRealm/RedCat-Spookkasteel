/*
 * FUN_0044a7c8 at 0044a7c8
 * undefined4 __register FUN_0044a7c8(int param_1)
 * Address ranges: 0044a7c8-0044a7f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0044a7c8(int param_1)

{
  char cVar1;
  uint uVar2;
  undefined3 uVar3;
  
  uVar2 = FUN_0044b528(param_1);
  if ((char)uVar2 != '\0') {
    uVar3 = (undefined3)(uVar2 >> 8);
    if ((*(char *)(param_1 + 0x211) == '\x02') || (*(char *)(param_1 + 0x211) == '\x05')) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\0';
      uVar3 = 0;
    }
    if (cVar1 != *(char *)(param_1 + 0x1f8)) {
      return CONCAT31(uVar3,1);
    }
  }
  return 0;
}

