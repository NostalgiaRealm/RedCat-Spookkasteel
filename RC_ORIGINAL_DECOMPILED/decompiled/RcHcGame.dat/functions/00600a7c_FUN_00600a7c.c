/*
 * FUN_00600a7c at 00600a7c
 * undefined FUN_00600a7c(void)
 * Address ranges: 00600a7c-00600aa4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00600a7c(char *param_1)

{
  size_t sVar1;
  char *pcVar2;
  uint uVar3;
  
  sVar1 = _strlen(param_1);
  uVar3 = sVar1 + 1;
  pcVar2 = operator_new(uVar3);
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar2 = *param_1;
    pcVar2 = pcVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

