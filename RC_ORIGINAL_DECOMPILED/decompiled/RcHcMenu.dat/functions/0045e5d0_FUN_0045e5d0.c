/*
 * FUN_0045e5d0 at 0045e5d0
 * undefined __register FUN_0045e5d0(uint param_1)
 * Address ranges: 0045e5d0-0045e5e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045e5d0(uint param_1)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = (char *)(param_1 + 0x10);
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 + '\x01';
  if (cVar2 == -1) {
    thunk_FUN_00402874(param_1);
  }
  return;
}

