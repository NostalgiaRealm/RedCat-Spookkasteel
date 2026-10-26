/*
 * FUN_0046e8d4 at 0046e8d4
 * undefined __register FUN_0046e8d4(int * param_1)
 * Address ranges: 0046e8d4-0046e915
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0046e8d4(int *param_1)

{
  char cVar1;
  
  if ((param_1[1] == 0) || (*(char *)(param_1[1] + 0x2e) == '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  FUN_0046e89c(param_1,cVar1);
  if (((param_1[1] == 0) || (2 < (byte)(*(char *)(param_1[1] + 0x2e) - 2U))) ||
     ((char)param_1[5] != '\0')) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  FUN_0046e8c4(param_1,cVar1);
  return;
}

