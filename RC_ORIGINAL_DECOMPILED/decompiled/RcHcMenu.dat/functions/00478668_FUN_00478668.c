/*
 * FUN_00478668 at 00478668
 * undefined4 __register FUN_00478668(undefined4 param_1, char * param_2)
 * Address ranges: 00478668-004787e2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00478668(undefined4 param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00409758(param_2,"UPPER");
  if (iVar1 != 0) {
    iVar1 = FUN_00409758(param_2,"LOWER");
    if (iVar1 != 0) {
      iVar1 = FUN_00409758(param_2,"SUBSTRING");
      if (iVar1 != 0) {
        iVar1 = FUN_00409758(param_2,"TRIM");
        if (iVar1 != 0) {
          iVar1 = FUN_00409758(param_2,"TRIMLEFT");
          if (iVar1 != 0) {
            iVar1 = FUN_00409758(param_2,"TRIMRIGHT");
            if (iVar1 != 0) {
              iVar1 = FUN_00409758(param_2,"YEAR");
              if (iVar1 != 0) {
                iVar1 = FUN_00409758(param_2,"MONTH");
                if (iVar1 != 0) {
                  iVar1 = FUN_00409758(param_2,"DAY");
                  if (iVar1 != 0) {
                    iVar1 = FUN_00409758(param_2,"HOUR");
                    if (iVar1 != 0) {
                      iVar1 = FUN_00409758(param_2,"MINUTE");
                      if (iVar1 != 0) {
                        iVar1 = FUN_00409758(param_2,"SECOND");
                        if (iVar1 != 0) {
                          iVar1 = FUN_00409758(param_2,"GETDATE");
                          if (iVar1 != 0) {
                            iVar1 = FUN_00409758(param_2,"DATE");
                            if (iVar1 != 0) {
                              iVar1 = FUN_00409758(param_2,"TIME");
                              if (iVar1 != 0) {
                                iVar1 = FUN_00409758(param_2,"SUM");
                                if (iVar1 != 0) {
                                  iVar1 = FUN_00409758(param_2,"MIN");
                                  if (iVar1 != 0) {
                                    iVar1 = FUN_00409758(param_2,"MAX");
                                    if (iVar1 != 0) {
                                      iVar1 = FUN_00409758(param_2,"AVG");
                                      if (iVar1 != 0) {
                                        iVar1 = FUN_00409758(param_2,"COUNT");
                                        if (iVar1 != 0) {
                                          return 0;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

