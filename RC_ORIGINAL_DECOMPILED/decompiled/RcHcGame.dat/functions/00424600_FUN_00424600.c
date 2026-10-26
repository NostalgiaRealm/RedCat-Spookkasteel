/*
 * FUN_00424600 at 00424600
 * undefined FUN_00424600(void)
 * Address ranges: 00424600-00424797
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aac4 slot 36 for .?AVCRcGargoyle@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64aac4 slot 36 for
   .?AVCRcGargoyle@@. Original bytes unchanged; names and types still inferred. */

void __fastcall FUN_00424600(int *param_1)

{
  float fVar1;
  char cVar2;
  code *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  float10 fVar10;
  char *local_5c;
  undefined4 uStack_48;
  char cStack_45;
  int *local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char local_28 [4];
  undefined4 *local_24;
  uint local_20;
  undefined4 local_1c;
  char acStack_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006226e8;
  local_c = ExceptionList;
  local_5c = (char *)param_1[0x3e];
  if (local_5c != (char *)0x0) {
    local_44 = (int *)&local_5c;
    ExceptionList = &local_c;
    *(int *)(local_5c + 0x14) = *(int *)(local_5c + 0x14) + 1;
    local_44 = (int *)FUN_0040b060();
    if (local_44 == (int *)0x0) {
      local_28[0] = cStack_45;
      uVar6 = 0xffffffff;
      local_5c = (char *)0x1;
      pcVar8 = &DAT_006b3f70;
      do {
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        cVar2 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar2 != '\0');
      uVar6 = ~uVar6 - 1;
      local_24 = (undefined4 *)0x0;
      local_20 = 0;
      local_1c = 0;
      cVar2 = FUN_00401940(uVar6);
      if (cVar2 != '\0') {
        puVar4 = (undefined4 *)&DAT_006b3f70;
        puVar9 = local_24;
        for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar9 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar9 = puVar9 + 1;
        }
        for (uVar7 = uVar6 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar9 = *(undefined1 *)puVar4;
          puVar4 = (undefined4 *)((int)puVar4 + 1);
          puVar9 = (undefined4 *)((int)puVar9 + 1);
        }
        *(undefined1 *)((int)local_24 + uVar6) = 0;
        local_20 = uVar6;
      }
      local_5c = local_28;
      local_4 = 0;
      pcVar3 = (code *)FUN_005a07f0(s_gameObject____0_0068ec7c,
                                    s_D__Work_RCHorror_RCSource_RCEnem_0068f7f4,0x305);
      (*pcVar3)();
      local_4 = 0xffffffff;
      if (local_24 != (undefined4 *)0x0) {
        cVar2 = *(char *)((int)local_24 + -1);
        local_5c = (char *)((int)local_24 + -1);
        if ((cVar2 == '\0') || (cVar2 == -1)) {
          FUN_005fe5f0();
        }
        else {
          *local_5c = cVar2 + -1;
        }
      }
    }
    local_5c = local_28;
    puVar4 = (undefined4 *)FUN_004236b0();
    uStack_34 = *puVar4;
    uStack_30 = puVar4[1];
    uStack_2c = puVar4[2];
    local_5c = acStack_18;
    puVar4 = (undefined4 *)(**(code **)(*local_44 + 0x48))();
    local_44 = (int *)*puVar4;
    uStack_40 = puVar4[1];
    uStack_3c = puVar4[2];
    iVar5 = (**(code **)(*param_1 + 0x9c))();
    fVar1 = *(float *)(iVar5 + 0x160);
    fVar10 = (float10)FUN_005b1600(auStack_38,&local_44);
    (**(code **)(*param_1 + 0x9c))((float)(fVar10 - ((float10)fVar1 - (float10)1.5707964)));
    FUN_0049cd90();
  }
  ExceptionList = local_c;
  return;
}

