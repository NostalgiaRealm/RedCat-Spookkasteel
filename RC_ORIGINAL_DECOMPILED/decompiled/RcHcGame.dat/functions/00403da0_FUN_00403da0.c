/*
 * FUN_00403da0 at 00403da0
 * undefined FUN_00403da0(void)
 * Address ranges: 00403da0-00403ebe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a440 slot 3 for .?AVCRcEnemyBreak@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64a440 slot 3 for
   .?AVCRcEnemyBreak@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_00403da0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  undefined1 *puVar8;
  undefined1 local_19;
  int local_18;
  int local_14;
  int local_10;
  undefined1 auStack_c [12];
  
  iVar3 = DAT_006b915c;
  if (DAT_006b915c == 0) {
    iVar3 = FUN_004bc480();
  }
  if (*(float *)(iVar3 + 0x478) == 0.0) {
    fVar7 = (float10)FUN_005ad390(iVar3 + 0x42c,&local_19);
    *(float *)(iVar3 + 0x478) = (float)fVar7;
  }
  iVar3 = FUN_00422da0();
  local_18 = 0;
  local_10 = iVar3;
  if (0 < *(int *)(iVar3 + 100)) {
    do {
      iVar6 = *(int *)(*(int *)(iVar3 + 0x150) + local_18 * 4);
      iVar1 = *(int *)(iVar6 + 0x28);
      iVar6 = *(int *)(iVar6 + 0x24);
      if (iVar6 < iVar1) {
        iVar4 = FUN_0060a4a0();
        iVar6 = iVar4 % ((iVar1 - iVar6) + 1) + iVar6;
      }
      else if (iVar1 < iVar6) {
        iVar4 = FUN_0060a4a0();
        iVar6 = iVar4 % ((iVar6 - iVar1) + 1) + iVar1;
      }
      if (0 < iVar6) {
        do {
          local_14 = iVar6;
          iVar3 = *(int *)(iVar3 + 0x150);
          iVar6 = (**(code **)(**(int **)(param_1 + 0x24) + 0x9c))();
          piVar2 = *(int **)(param_1 + 0x24);
          puVar8 = auStack_c;
          (**(code **)(*piVar2 + 0xa4))(puVar8,0);
          uVar5 = FUN_0049bc80(puVar8);
          uVar5 = (**(code **)(*piVar2 + 0x9c))
                            (iVar6 + 0x11c,*(undefined4 *)(iVar3 + local_18 * 4),uVar5);
          FUN_004a7360(uVar5);
          local_14 = local_14 + -1;
          iVar3 = local_10;
          iVar6 = local_14;
        } while (local_14 != 0);
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(iVar3 + 100));
  }
  return;
}

