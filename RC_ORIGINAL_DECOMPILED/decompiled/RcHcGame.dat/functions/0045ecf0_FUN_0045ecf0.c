/*
 * FUN_0045ecf0 at 0045ecf0
 * undefined FUN_0045ecf0(void)
 * Address ranges: 0045ecf0-0045eed1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0045ecf0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 local_60;
  
  uVar4 = DAT_006b71c8;
  uVar1 = *(undefined4 *)(param_1 + 0x159c);
  uVar2 = *(undefined4 *)(param_1 + 0x15a0);
  uVar3 = *(undefined4 *)(param_1 + 0x15a4);
  local_60 = 0xf;
  do {
    FUN_0047db60(uVar1,uVar2,uVar3,0,0,0,0x40400000,0,0,0,1,0,0x3d4ccccd,0,0x42c80000,0,0x40400000,
                 0x3dcccccd,0,0x41a00000,0x41a00000,0x41a00000,0,0,uVar4,0,0,0x41480000,1,0,0,0,0,0,
                 0,0);
    local_60 = local_60 + -1;
  } while (local_60 != 0);
  return;
}

