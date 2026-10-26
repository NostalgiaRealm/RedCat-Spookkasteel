/*
 * FUN_0050e91c at 0050e91c
 * undefined __register FUN_0050e91c(int * param_1)
 * Address ranges: 0050e91c-0050e976
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0050e91c(int *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)((int)param_1 + 0x20b);
  if (cVar1 == '\0') {
    if (*(char *)((int)param_1 + 0x20a) == '\0') {
      FUN_0050e880(param_1,'\x01');
      return;
    }
    FUN_0050e880(param_1,'\x02');
  }
  else {
    if (cVar1 == '\x01') {
      FUN_0050e880(param_1,'\0');
      return;
    }
    if (cVar1 == '\x02') {
      FUN_0050e880(param_1,'\x01');
    }
  }
  return;
}

