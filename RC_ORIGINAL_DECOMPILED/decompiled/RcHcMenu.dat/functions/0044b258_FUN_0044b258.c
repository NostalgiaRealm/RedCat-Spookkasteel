/*
 * FUN_0044b258 at 0044b258
 * undefined __register FUN_0044b258(int param_1, char param_2)
 * Address ranges: 0044b258-0044b28e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044b258(int param_1,char param_2)

{
  char cVar1;
  
  if (param_2 != *(char *)(param_1 + 0x211)) {
    *(char *)(param_1 + 0x211) = param_2;
    if ((param_2 == '\x02') || (param_2 == '\x05')) {
      cVar1 = '\x01';
    }
    else {
      cVar1 = '\0';
    }
    FUN_00449624(param_1,cVar1);
    if ((*(byte *)(param_1 + 0x20) & 0x10) == 0) {
      FUN_00435de4(param_1);
    }
  }
  return;
}

