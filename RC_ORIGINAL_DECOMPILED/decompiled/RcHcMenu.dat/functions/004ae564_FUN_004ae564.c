/*
 * FUN_004ae564 at 004ae564
 * undefined __register FUN_004ae564(int * param_1, undefined1 param_2, undefined1 param_3, int param_4, int param_5)
 * Address ranges: 004ae564-004ae5d6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ae564(int *param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined1 *)((int)param_1 + 0x181) = 1;
  if ((((param_5 < 0) || (param_4 < 0)) || (param_1[0xe] < param_5)) || (param_1[0xf] < param_4)) {
    *(undefined1 *)((int)param_1 + 0x181) = 0;
  }
  (**(code **)(*param_1 + 0x74))();
  FUN_00433d7c((int)param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),param_2),
               CONCAT31((int3)((uint)extraout_ECX >> 8),param_3),param_4,param_5);
  return;
}

