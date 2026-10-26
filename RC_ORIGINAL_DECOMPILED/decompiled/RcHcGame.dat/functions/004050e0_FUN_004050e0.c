/*
 * FUN_004050e0 at 004050e0
 * undefined FUN_004050e0(void)
 * Address ranges: 004050e0-00405229
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a5a0 slot 1 for .?AVCRcKnightAttack@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a5a0 slot 1 for
   .?AVCRcKnightAttack@@. Original bytes unchanged; names and types still inferred. */

void __thiscall FUN_004050e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  float10 fVar4;
  float10 fVar5;
  undefined1 *puVar6;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [12];
  undefined1 local_c [12];
  
  cVar1 = FUN_00422f30(param_3);
  if (cVar1 == '\0') {
    FUN_00402d00();
    return;
  }
  FUN_00423700();
  cVar1 = FUN_004a0d00();
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x2c) = 0;
    (**(code **)(**(int **)(param_1 + 0x28) + 0x8c))(6,0,0x3fe66666);
    return;
  }
  if (*(char *)(param_1 + 0x2c) == '\0') {
    FUN_00423700();
    fVar4 = (float10)FUN_004a1060();
    fVar5 = (float10)FUN_0042bcd0();
    if (fVar5 < (float10)(float)fVar4) {
      FUN_00423700();
      fVar4 = (float10)FUN_004a1060();
      fVar5 = (float10)FUN_0042bce0();
      if ((float10)(float)fVar4 < fVar5) {
        puVar3 = (undefined4 *)FUN_0040e670(local_c);
        local_30 = *puVar3;
        local_2c = puVar3[1];
        puVar6 = local_c;
        local_28 = puVar3[2];
        (**(code **)(**(int **)(param_1 + 0x28) + 0x9c))(puVar6);
        puVar3 = (undefined4 *)FUN_0049bc80(puVar6);
        uStack_24 = *puVar3;
        uStack_20 = puVar3[1];
        uStack_1c = puVar3[2];
        FUN_005b2fe0(auStack_18);
        FUN_005b3020(0x3e99999a,&local_30);
        uVar2 = (**(code **)(**(int **)(param_1 + 0x28) + 0xc0))(&local_30,&uStack_24);
        *(undefined1 *)(param_1 + 0x2c) = uVar2;
      }
    }
  }
  return;
}

