/*
 * FUN_004858f4 at 004858f4
 * undefined __register FUN_004858f4(int * param_1)
 * Address ranges: 004858f4-004859a6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004858f4(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  short sVar3;
  
  if (param_1[0x7e] < param_1[0x7f] + -1) {
    param_1[0x7e] = param_1[0x7e] + 1;
  }
  else if (param_1[0x7f] < param_1[0x7d]) {
    FUN_004733c8(param_1);
  }
  else {
    uVar1 = thunk_FUN_00479bf3(param_1[0x5a]);
    sVar3 = (short)uVar1;
    if ((sVar3 != 0) && (sVar3 != 0x2202)) {
      FUN_0047fe48(uVar1);
    }
    if ((param_1[0x7f] == 0) && (sVar3 == 0x2202)) {
      FUN_004733c8(param_1);
    }
    param_1[0x80] = param_1[0x80] + param_1[0x7f];
    param_1[0x7e] = 0;
  }
  if (0 < param_1[0x17]) {
    uVar2 = FUN_004730e4((int)param_1);
    (**(code **)(*param_1 + 0x120))(param_1,uVar2);
  }
  (**(code **)(*param_1 + 0xac))(param_1,3,0xffffffff);
  return;
}

