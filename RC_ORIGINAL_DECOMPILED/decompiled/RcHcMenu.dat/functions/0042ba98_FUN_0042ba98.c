/*
 * FUN_0042ba98 at 0042ba98
 * undefined __register FUN_0042ba98(int * param_1, undefined1 param_2)
 * Address ranges: 0042ba98-0042bacb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0042ba98(int *param_1,undefined1 param_2)

{
  bool bVar1;
  int *piVar2;
  
  *(undefined1 *)(param_1 + 0x7e) = param_2;
  bVar1 = FUN_00438c84((int)param_1);
  if (bVar1) {
    piVar2 = FUN_0044879c(param_1);
    if (piVar2 != (int *)0x0) {
      FUN_00433700((int)piVar2,0xb007,0,piVar2[0x82]);
    }
  }
  return;
}

