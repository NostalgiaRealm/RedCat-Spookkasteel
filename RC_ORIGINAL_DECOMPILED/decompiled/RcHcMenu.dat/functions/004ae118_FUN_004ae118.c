/*
 * FUN_004ae118 at 004ae118
 * undefined __register FUN_004ae118(int * param_1)
 * Address ranges: 004ae118-004ae165
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ae118(int *param_1)

{
  FUN_00431f78(param_1,100);
  FUN_00431f98(param_1,0x32);
  FUN_0049b884((int *)param_1[0x5f],(int *)param_1[0xe],param_1[0xf],(undefined *)0x20);
  (**(code **)(*param_1 + 0x74))();
  return;
}

