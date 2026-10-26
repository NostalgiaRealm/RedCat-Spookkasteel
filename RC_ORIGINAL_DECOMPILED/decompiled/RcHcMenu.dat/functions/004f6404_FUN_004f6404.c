/*
 * FUN_004f6404 at 004f6404
 * undefined __register FUN_004f6404(int * param_1, int * param_2)
 * Address ranges: 004f6404-004f6449
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f6404(int *param_1,int *param_2)

{
  WPARAM WVar1;
  
  if ((param_2 == (int *)0x0) || (param_1 == (int *)param_2[0x7d])) {
    FUN_004f5ec0(param_1,param_2);
    if (param_2 == (int *)0x0) {
      FUN_004f5300(param_1,0xffffffff);
    }
    else if (param_2 == (int *)param_1[0x91]) {
      WVar1 = FUN_004f5a64((int)param_2);
      FUN_004f5300(param_1,WVar1);
    }
  }
  return;
}

