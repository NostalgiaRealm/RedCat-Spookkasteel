/*
 * FUN_004d4fbc at 004d4fbc
 * undefined __register FUN_004d4fbc(int * param_1)
 * Address ranges: 004d4fbc-004d4fe2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d4fbc(int *param_1)

{
  char cVar1;
  
  if (*(char *)((int)param_1 + 9) == '\x02') {
    cVar1 = (**(code **)(*param_1 + 0x38))();
    if (cVar1 != '\0') {
      FUN_004d516c(param_1);
    }
  }
  return;
}

