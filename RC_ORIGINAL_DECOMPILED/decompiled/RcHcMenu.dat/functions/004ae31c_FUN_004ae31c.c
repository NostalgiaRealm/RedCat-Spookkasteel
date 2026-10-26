/*
 * FUN_004ae31c at 004ae31c
 * undefined __register FUN_004ae31c(int * param_1, short * param_2, undefined1 param_3)
 * Address ranges: 004ae31c-004ae39c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ae31c(int *param_1,short *param_2,undefined1 param_3)

{
  if (*param_2 == 0x20) {
    *(undefined1 *)(param_1 + 0x60) = 1;
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) | 2;
    (**(code **)(*param_1 + 0x74))();
  }
  if (*param_2 == 0x1b) {
    *(ushort *)(param_1 + 0x11) = *(ushort *)(param_1 + 0x11) & 0xfffd;
    *(undefined1 *)(param_1 + 0x60) = 0;
    (**(code **)(*param_1 + 0x74))();
  }
  FUN_004a8fa0((int)param_1,param_2,param_3);
  return;
}

