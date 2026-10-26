/*
 * FUN_0047c760 at 0047c760
 * undefined FUN_0047c760(void)
 * Address ranges: 0047c760-0047cbce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0047c760(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  int local_4c;
  int local_44;
  
  puVar1 = *(undefined4 **)(param_1 + 0xf8);
  uVar2 = puVar1[6];
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  FUN_0047db60(*puVar1,puVar1[1],puVar1[2],0,0,0,puVar1[6],0,0,10,0,0,0xbfc00000,0,0x42c80000,
               0x42c80000,0,0,0,0x41a00000,0x41a00000,0x41a00000,0,0,uVar2,0x41f00000,0x41f00000,
               0x40a00000,2,0x41a00000,0x41a00000,0x41a00000,0x3fc00000,0x3fc00000,0,0x3f800000);
  FUN_0047cbd0();
  iVar9 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar9 = FUN_004bc480();
  }
  iVar11 = *(int *)(iVar9 + 0x4e8);
  if (iVar11 == -0x80000000) {
    puVar10 = *(undefined1 **)(iVar9 + 0x49c);
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &DAT_0064a3b4;
    }
    iVar11 = FUN_0060af10(puVar10);
    *(int *)(iVar9 + 0x4e8) = iVar11;
  }
  if (iVar11 == 0) {
    local_44 = 0x32;
    uVar6 = *(undefined4 *)(param_1 + 0x4b1c);
    do {
      FUN_0047db60(uVar3,uVar4,uVar5,0,0,0,0x40800000,0,0,0,1,0,0xbfc00000,0,0x42c80000,0,0x40400000
                   ,0x3f800000,0,uVar6,uVar6,uVar6,1,1,uVar2,0x41f00000,0x41f00000,0x40a00000,2,
                   0x41a00000,0x41a00000,0x41a00000,0x3fc00000,0x3fc00000,0,0x3f800000);
      local_44 = local_44 + -1;
    } while (local_44 != 0);
    local_4c = 0;
    uVar7 = *(undefined4 *)(*(int *)(param_1 + 0xf8) + 0x18);
    do {
      fVar8 = (float)local_4c * 0.7;
      FUN_0047db60(uVar3,uVar4,uVar5,0,0,0,uVar7,0,0,0,2,0,0xbfc00000,0,0x42c80000,0,0x40400000,
                   0x3f800000,0,uVar6,uVar6,uVar6,1,1,uVar2,0x41f00000,0x41f00000,0x40a00000,2,
                   0x41a00000,0x41a00000,0x41a00000,fVar8,fVar8,0,fVar8);
      local_4c = local_4c + 1;
    } while (local_4c < 5);
  }
  return;
}

