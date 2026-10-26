/*
 * FUN_0046e6c0 at 0046e6c0
 * undefined FUN_0046e6c0(void)
 * Address ranges: 0046e6c0-0046e8a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0046e6c0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_60;
  
  uVar4 = DAT_006b8624;
  uVar1 = *(undefined4 *)(param_1 + 0x13fc);
  uVar2 = *(undefined4 *)(param_1 + 0x1400);
  uVar3 = *(undefined4 *)(param_1 + 0x1404);
  local_60 = 0xf;
  do {
    FUN_0047db60(uVar1,uVar2,uVar3,0,0,0,0x40e00000,0,0,0,1,0,0x3d4ccccd,0,0x42480000,0,0x40c66666,
                 0x3f800000,0,0x41a00000,0x41a00000,0x41a00000,0,0,uVar4,0,0,0x41480000,1,0,0,0,0,0,
                 0,0);
    local_60 = local_60 + -1;
  } while (local_60 != 0);
  return;
}

