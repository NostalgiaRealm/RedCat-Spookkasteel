/*
 * FUN_005d3990 at 005d3990
 * undefined FUN_005d3990(void)
 * Address ranges: 005d3990-005d39fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005d3990(int param_1)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int local_4;
  
  local_4 = 0;
  puVar2 = (undefined1 *)(param_1 + 0x3504c);
  do {
    param_1 = 0;
    puVar3 = puVar2;
    do {
      uVar1 = __ftol();
      *puVar3 = uVar1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 0x100;
    } while (param_1 < 0x40);
    local_4 = local_4 + 1;
    puVar2 = puVar2 + 1;
  } while (local_4 < 0x100);
  return;
}

