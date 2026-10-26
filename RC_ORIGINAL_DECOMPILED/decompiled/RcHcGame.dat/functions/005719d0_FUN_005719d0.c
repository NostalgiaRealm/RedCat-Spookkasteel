/*
 * FUN_005719d0 at 005719d0
 * undefined FUN_005719d0(void)
 * Address ranges: 005719d0-00571b73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005719d0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  float local_a4 [3];
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  float local_88 [16];
  undefined1 local_48 [12];
  undefined1 local_3c [60];
  
  local_88[0] = 1.0;
  local_88[1] = 1.0;
  local_88[2] = -1.0;
  local_88[3] = -1.0;
  local_88[4] = 1.0;
  local_88[5] = -1.0;
  local_88[6] = -1.0;
  local_88[7] = 1.0;
  local_88[0xc] = 0.0;
  local_88[0xd] = 0.0;
  local_88[0xe] = 1.0;
  local_88[0xf] = 1.0;
  local_88[8] = 1.0;
  local_88[9] = 0.0;
  local_88[10] = 0.0;
  local_88[0xb] = 1.0;
  FUN_005718d0(param_1 + 0x1a8,local_3c,local_48);
  puVar4 = (undefined4 *)(param_1 + 0x1c4);
  iVar3 = 0;
  do {
    local_a4[0] = *(float *)((int)local_88 + iVar3);
    local_a4[1] = 0.0;
    local_a4[2] = *(float *)((int)local_88 + iVar3 + 0x10);
    local_98 = *(float *)(param_1 + 0x1b4);
    if (local_98 != 0.0) {
      FUN_005b3130(local_98);
      FUN_005b35b0(local_a4);
    }
    FUN_005b3020(*(float *)(param_1 + 0x108) * *(float *)(param_1 + 0x110) * local_a4[0] * 0.5,
                 &local_94);
    FUN_005b3020(*(float *)(param_1 + 0x10c) * *(float *)(param_1 + 0x110) * local_a4[2] * 0.5,
                 &local_94);
    puVar4[-1] = local_94;
    uVar1 = *(undefined4 *)((int)local_88 + iVar3 + 0x30);
    *puVar4 = local_90;
    uVar2 = *(undefined4 *)((int)local_88 + iVar3 + 0x20);
    puVar4[1] = local_8c;
    puVar4[2] = uVar1;
    puVar4[3] = uVar2;
    iVar3 = iVar3 + 4;
    puVar4 = puVar4 + 9;
  } while (iVar3 < 0x10);
  *(undefined1 *)(param_1 + 0x1bc) = 0;
  return;
}

