/*
 * FUN_00570fd0 at 00570fd0
 * undefined FUN_00570fd0(void)
 * Address ranges: 00570fd0-00571135
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_00570fd0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined4 local_14;
  
  uVar4 = FUN_0060a4a0();
  uVar4 = uVar4 & 0x80000001;
  bVar6 = uVar4 == 0;
  if ((int)uVar4 < 0) {
    bVar6 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
  }
  local_14 = -1.0;
  if (bVar6) {
    local_14 = 1.0;
  }
  iVar5 = FUN_0060a4a0();
  fVar1 = ((float)(iVar5 % 10000) * 6.283185e-05 + 2.5132742) * local_14 * 3.0;
  uVar4 = FUN_0060a4a0();
  uVar4 = uVar4 & 0x80000001;
  bVar6 = uVar4 == 0;
  if ((int)uVar4 < 0) {
    bVar6 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
  }
  local_14 = -1.0;
  if (bVar6) {
    local_14 = 1.0;
  }
  iVar5 = FUN_0060a4a0();
  fVar2 = ((float)(iVar5 % 10000) * 6.283185e-05 + 2.5132742) * local_14 * 3.0;
  uVar4 = FUN_0060a4a0();
  uVar4 = uVar4 & 0x80000001;
  bVar6 = uVar4 == 0;
  if ((int)uVar4 < 0) {
    bVar6 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
  }
  local_14 = -1.0;
  if (bVar6) {
    local_14 = 1.0;
  }
  iVar5 = FUN_0060a4a0();
  *(float *)(param_1 + 0x230) = fVar1;
  *(float *)(param_1 + 0x234) = fVar2;
  fVar3 = ((float)(iVar5 % 10000) * 6.283185e-05 + 2.5132742) * local_14 * 3.0;
  *(float *)(param_1 + 0x238) = fVar3;
  if (((fVar1 == 0.0) && (fVar2 == 0.0)) && (fVar3 == 0.0)) {
    *(undefined1 *)(param_1 + 0x23c) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x23c) = 1;
  return;
}

