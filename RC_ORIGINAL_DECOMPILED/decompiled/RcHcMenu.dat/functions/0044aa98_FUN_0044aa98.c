/*
 * FUN_0044aa98 at 0044aa98
 * undefined __register FUN_0044aa98(int * param_1, uint param_2, undefined4 param_3)
 * Address ranges: 0044aa98-0044aad9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044aa98(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  char cVar1;
  
  cVar1 = (char)param_2;
  if ((*(byte *)(param_1 + 0xb3) & 1) == 0) {
    if ((cVar1 != '\0') && (cVar1 != *(char *)((int)param_1 + 0x47))) {
      FUN_0044ba04(param_1);
      param_3 = extraout_ECX;
    }
    FUN_0043262c(param_1,param_2,param_3);
  }
  else {
    if (cVar1 == '\0') {
      *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) & 0xfd;
      return;
    }
    *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) | 2;
  }
  return;
}

