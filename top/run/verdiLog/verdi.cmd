verdiSetActWin -dock widgetDock_<Message>
simSetSimulator "-vcssv" -exec \
           "/nfs/share/home/liuhanzhang/ecos_projects/top/run/simv" -args \
           "+ip_sel03, +dump_all"
debImport "-dbdir" \
          "/nfs/share/home/liuhanzhang/ecos_projects/top/run/simv.daidir"
debLoadSimResult /nfs/share/home/liuhanzhang/ecos_projects/top/run/soc_tb.fsdb
wvCreateWindow
verdiSetActWin -dock widgetDock_MTB_SOURCE_TAB_1
debExit
