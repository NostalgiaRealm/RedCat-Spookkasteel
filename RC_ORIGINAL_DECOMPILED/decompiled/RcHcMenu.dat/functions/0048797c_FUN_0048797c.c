/*
 * FUN_0048797c at 0048797c
 * undefined __register FUN_0048797c(int * param_1, undefined1 param_2)
 * Address ranges: 0048797c-004879c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0048797c(int *param_1,undefined1 param_2)

{
  char cVar1;
  uint uVar2;
  
  if ((param_1[0x5a] != 0) && (*(char *)(param_1[0x8b] + 0x66) != '\0')) {
    cVar1 = (**(code **)(*param_1 + 0x124))();
    if (cVar1 != '\0') {
      uVar2 = thunk_FUN_00478ffa(param_1[0x5a]);
      FUN_0047fe48(uVar2);
    }
  }
  *(undefined1 *)((int)param_1 + 0x22b) = param_2;
  return;
}

