/*
 * FUN_0042d880 at 0042d880
 * undefined FUN_0042d880(void)
 * Address ranges: 0042d880-0042d9f4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_0042d880(int param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006234e8;
  local_c = ExceptionList;
  piVar8 = (int *)**(int **)(param_1 + 0x24);
  ExceptionList = &local_c;
  if (piVar8 != *(int **)(param_1 + 0x24)) {
    do {
      iVar4 = piVar8[2];
      if (iVar4 == 0) {
        uVar5 = 0xffffffff;
        pcVar9 = &DAT_006b3f70;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        uVar5 = ~uVar5 - 1;
        local_18 = (undefined4 *)0x0;
        local_14 = 0;
        local_10 = 0;
        cVar1 = FUN_00401940(uVar5,1);
        if (cVar1 != '\0') {
          puVar7 = (undefined4 *)&DAT_006b3f70;
          puVar10 = local_18;
          for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar10 = puVar10 + 1;
          }
          for (uVar6 = uVar5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar10 = *(undefined1 *)puVar7;
            puVar7 = (undefined4 *)((int)puVar7 + 1);
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          *(undefined1 *)((int)local_18 + uVar5) = 0;
          local_14 = uVar5;
        }
        local_4 = 0;
        pcVar2 = (code *)FUN_005a07f0(s_actor____0_006900b8,
                                      s_D__Work_RCHorror_RCSource_RCTarg_00690034,0x201,local_1c);
        (*pcVar2)();
        local_4 = 0xffffffff;
        if (local_18 != (undefined4 *)0x0) {
          cVar1 = *(char *)((int)local_18 + -1);
          if ((cVar1 == '\0') || (cVar1 == -1)) {
            FUN_005fe5f0((char *)((int)local_18 + -1));
          }
          else {
            *(char *)((int)local_18 + -1) = cVar1 + -1;
          }
        }
        local_18 = (undefined4 *)0x0;
        local_14 = 0;
        local_10 = 0;
      }
      if (*(char *)(iVar4 + 0x7c) != '\0') {
        iVar3 = FUN_0060a6f2(iVar4,0,&CAdamActor::RTTI_Type_Descriptor,
                             &CRcActor::RTTI_Type_Descriptor,0);
        if (iVar3 == 0) {
          iVar4 = FUN_0060a6f2(iVar4,0,&CAdamActor::RTTI_Type_Descriptor,
                               &CRcCursorActor::RTTI_Type_Descriptor,0);
          if (iVar4 != 0) {
            FUN_00422380();
          }
        }
        else {
          FUN_0042a5a0();
        }
      }
      piVar8 = (int *)*piVar8;
    } while (piVar8 != (int *)*(int *)(param_1 + 0x24));
  }
  ExceptionList = local_c;
  return;
}

