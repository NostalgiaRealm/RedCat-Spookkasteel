/*
 * FUN_004d6720 at 004d6720
 * undefined FUN_004d6720(void)
 * Address ranges: 004d6720-004d67c3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_004d6720(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uStack_40;
  undefined1 auStack_3c [4];
  int local_38 [2];
  undefined1 auStack_30 [8];
  float fStack_28;
  
  param_1[0x8b] = 0;
  param_1[0x8c] = 0x447a0000;
  iVar2 = (**(code **)(*param_1 + 0x48))(local_38);
  puVar5 = &stack0xffffffb8;
  uStack_40 = *(undefined4 *)(iVar2 + 8);
  uVar6 = 1;
  puVar4 = auStack_3c;
  uVar3 = (**(code **)(*param_1 + 0x48))(puVar4,puVar5,1,auStack_30);
  cVar1 = FUN_00554ab0(uVar3,puVar4,puVar5,uVar6);
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(*param_1 + 0x48))(&uStack_40);
    param_1[0x8c] = (int)(*(float *)(iVar2 + 4) - fStack_28);
    if (local_38[0] != 0) {
      iVar2 = FUN_004d0570(local_38[0]);
      param_1[0x8b] = iVar2;
    }
  }
  return;
}

