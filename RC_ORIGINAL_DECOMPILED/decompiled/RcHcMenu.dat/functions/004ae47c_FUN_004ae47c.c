/*
 * FUN_004ae47c at 004ae47c
 * undefined __register FUN_004ae47c(int * param_1, undefined1 param_2, undefined1 param_3, undefined4 param_4, undefined4 param_5)
 * Address ranges: 004ae47c-004ae4c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ae47c(int *param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  *(undefined1 *)(param_1 + 0x60) = 1;
  *(undefined1 *)((int)param_1 + 0x181) = 1;
  (**(code **)(*param_1 + 0x74))();
  FUN_00433a98((int)param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),param_2),
               CONCAT31((int3)((uint)extraout_ECX >> 8),param_3),param_4,param_5);
  return;
}

