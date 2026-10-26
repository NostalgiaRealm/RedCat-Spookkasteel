/*
 * FUN_0045fee8 at 0045fee8
 * undefined __register FUN_0045fee8(int * param_1)
 * Address ranges: 0045fee8-0045ff3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0045fee8(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int *local_c;
  
  bVar1 = FUN_0045fc38((int)param_1);
  if (bVar1) {
    FUN_0045fa7c(param_1);
  }
  else {
    local_c = param_1;
    if (*(char *)((int)param_1 + 0x11) != '\0') {
      while (uVar2 = FUN_0045fb34((int)local_c), (char)uVar2 != '\0') {
        *(undefined1 *)((int)local_c + 0x11) = 0;
        local_c = (int *)local_c[3];
      }
      (**(code **)(*local_c + 4))();
    }
  }
  return;
}

